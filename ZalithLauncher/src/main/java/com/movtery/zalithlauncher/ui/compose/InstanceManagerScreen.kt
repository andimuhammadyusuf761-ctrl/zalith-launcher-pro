package com.movtery.zalithlauncher.ui.compose

import androidx.compose.animation.AnimatedContent
import androidx.compose.animation.ExperimentalAnimationApi
import androidx.compose.animation.animateContentSize
import androidx.compose.animation.core.animateFloatAsState
import androidx.compose.animation.fadeIn
import androidx.compose.animation.fadeOut
import androidx.compose.animation.scaleIn
import androidx.compose.animation.scaleOut
import androidx.compose.animation.with
import androidx.compose.foundation.ExperimentalFoundationApi
import androidx.compose.foundation.background
import androidx.compose.foundation.combinedClickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.ExperimentalLayoutApi
import androidx.compose.foundation.layout.FlowRow
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.offset
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.grid.GridCells
import androidx.compose.foundation.lazy.grid.LazyVerticalGrid
import androidx.compose.foundation.lazy.grid.items
import androidx.compose.foundation.lazy.items
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.rounded.Add
import androidx.compose.material.icons.rounded.Analytics
import androidx.compose.material.icons.rounded.ContentCopy
import androidx.compose.material.icons.rounded.Delete
import androidx.compose.material.icons.rounded.Edit
import androidx.compose.material.icons.rounded.Folder
import androidx.compose.material.icons.rounded.FolderZip
import androidx.compose.material.icons.rounded.Gamepad
import androidx.compose.material.icons.rounded.MoreVert
import androidx.compose.material.icons.rounded.PlayArrow
import androidx.compose.material.icons.rounded.Science
import androidx.compose.material.icons.rounded.Settings
import androidx.compose.material.icons.rounded.Update
import androidx.compose.material.icons.rounded.Warning
import androidx.compose.material.icons.rounded.Zip
import androidx.compose.material3.AssistChip
import androidx.compose.material3.AssistChipDefaults
import androidx.compose.material3.Card
import androidx.compose.material3.CardDefaults
import androidx.compose.compose.material3.DropdownMenu
import androidx.compose.material3.DropdownMenuItem
import androidx.compose.material3.ElevatedCard
import androidx.compose.material3.ExperimentalMaterial3Api
import androidx.compose.material3.FilledTonalButton
import androidx.compose.material3.FilterChip
import androidx.compose.material3.FloatingActionButton
import androidx.compose.material3.HorizontalDivider
import androidx.compose.material3.Icon
import androidx.compose.material3.IconButton
import androidx.compose.material3.IconButtonDefaults
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.OutlinedButton
import androidx.compose.material3.OutlinedCard
import androidx.compose.material3.Scaffold
import androidx.compose.material3.SegmentedButton
import androidx.compose.material3.SegmentedButtonDefaults
import androidx.compose.material3.SingleChoiceSegmentedButtonRow
import androidx.compose.material3.SuggestionChip
import androidx.compose.material3.Surface
import androidx.compose.material3.Switch
import androidx.compose.material3.Text
import androidx.compose.material3.TextButton
import androidx.compose.material3.TopAppBar
import androidx.compose.material3.TopAppBarDefaults
import androidx.compose.material3.rememberTopAppBarState
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableIntStateOf
import androidx.compose.runtime.mutableStateListOf
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.saveable.rememberSaveable
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.clip
import androidx.compose.ui.draw.scale
import androidx.compose.ui.draw.shadow
import androidx.compose.ui.graphics.Brush
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.input.nestedscroll.nestedScroll
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.style.TextAlign
import androidx.compose.ui.text.style.TextOverflow
import androidx.compose.ui.unit.dp
import androidx.compose.ui.window.Dialog
import androidx.compose.ui.window.DialogProperties
import kotlinx.coroutines.delay
import java.text.SimpleDateFormat
import java.util.Date
import java.util.Locale
import java.util.UUID

// ============================================================================
// DATA MODELS
// ============================================================================

data class MinecraftInstance(
    val id: String = UUID.randomUUID().toString(),
    val name: String,
    val mcVersion: String,
    val loaderType: ModLoaderType = ModLoaderType.VANILLA,
    val loaderVersion: String? = null,
    val icon: InstanceIcon = InstanceIcon.GRASS_BLOCK,
    val isFavorite: Boolean = false,
    val lastPlayed: Long? = null,
    val totalPlayTime: Long = 0, // in minutes
    val gameDirectory: String,
    val javaArgs: String = "",
    val notes: String = "",
    val mods: List<ModInfo> = emptyList()
)

enum class ModLoaderType(val displayName: String, val icon: ImageVector) {
    VANILLA("Vanilla", Icons.Rounded.Folder),
    FABRIC("Fabric", Icons.Rounded.Science),
    FORGE("Forge", Icons.Rounded.Settings),
    NEOFORGE("NeoForge", Icons.Rounded.Update),
    QUILT("Quilt", Icons.Rounded.FolderZip)
}

enum class InstanceIcon(val displayName: String) {
    GRASS_BLOCK("Grass Block"),
    DIAMOND("Diamond"),
    SWORD("Sword"),
    PICKAXE("Pickaxe"),
    CHEST("Chest"),
    BOOK("Book"),
    POTION("Potion"),
    ENDER_PEARL("Ender Pearl"),
    NETHER_STAR("Nether Star"),
    DRAGON_EGG("Dragon Egg"),
    REDSTONE("Redstone")
}

data class ModInfo(
    val id: String,
    val name: String,
    val version: String,
    val isEnabled: Boolean = true
)

// ============================================================================
// INSTANCE MANAGER SCREEN
// ============================================================================

@OptIn(
    ExperimentalMaterial3Api::class, ExperimentalAnimationApi::class,
    ExperimentalFoundationApi::class
)
@Composable
fun InstanceManagerScreen(
    instances: List<MinecraftInstance> = sampleInstances(),
    onCreateInstance: () -> Unit = {},
    onLaunchInstance: (MinecraftInstance) -> Unit = {},
    onEditInstance: (MinecraftInstance) -> Unit = {},
    onDuplicateInstance: (MinecraftInstance) -> Unit = {},
    onDeleteInstance: (MinecraftInstance) -> Unit = {},
    onOpenFolder: (MinecraftInstance) -> Unit = {},
    onToggleFavorite: (MinecraftInstance) -> Unit = {}
) {
    var selectedView by rememberSaveable { mutableStateOf(ViewMode.GRID) }
    var searchQuery by rememberSaveable { mutableStateOf("") }
    var selectedLoaderFilter by rememberSaveable { mutableStateOf<ModLoaderType?>(null) }
    var showCreateDialog by remember { mutableStateOf(false) }
    var instanceToDelete by remember { mutableStateOf<MinecraftInstance?>(null) }

    val scrollBehavior = TopAppBarDefaults.exitUntilCollapsedScrollBehavior(
        rememberTopAppBarState()
    )

    // Filter instances based on search and filter
    val filteredInstances = remember(instances, searchQuery, selectedLoaderFilter) {
        instances.filter { instance ->
            val matchesSearch = searchQuery.isBlank() ||
                    instance.name.contains(searchQuery, ignoreCase = true) ||
                    instance.mcVersion.contains(searchQuery, ignoreCase = true) ||
                    instance.notes.contains(searchQuery, ignoreCase = true)

            val matchesFilter = selectedLoaderFilter == null || instance.loaderType == selectedLoaderFilter

            matchesSearch && matchesFilter
        }.sortedWith(compareByDescending<MinecraftInstance> { it.isFavorite }
            .thenByDescending { it.lastPlayed ?: 0 })
    }

    Scaffold(
        modifier = Modifier.nestedScroll(scrollBehavior.nestedScrollConnection),
        topBar = {
            TopAppBar(
                title = {
                    Column {
                        Text(
                            "Instance Manager",
                            style = MaterialTheme.typography.titleLarge,
                            fontWeight = FontWeight.Bold
                        )
                        Text(
                            "${filteredInstances.size} instances",
                            style = MaterialTheme.typography.bodySmall,
                            color = MaterialTheme.colorScheme.onSurfaceVariant
                        )
                    }
                },
                actions = {
                    // View Toggle
                    SingleChoiceSegmentedButtonRow(
                        modifier = Modifier.padding(end = 8.dp)
                    ) {
                        SegmentedButton(
                            selected = selectedView == ViewMode.GRID,
                            onClick = { selectedView = ViewMode.GRID },
                            shape = SegmentedButtonDefaults.itemShape(
                                index = 0,
                                count = 2
                            )
                        ) {
                            Icon(Icons.Rounded.Folder, null, modifier = Modifier.size(18.dp))
                        }
                        SegmentedButton(
                            selected = selectedView == ViewMode.LIST,
                            onClick = { selectedView = ViewMode.LIST },
                            shape = SegmentedButtonDefaults.itemShape(
                                index = 1,
                                count = 2
                            )
                        ) {
                            Icon(Icons.Rounded.Settings, null, modifier = Modifier.size(18.dp))
                        }
                    }
                },
                scrollBehavior = scrollBehavior
            )
        },
        floatingActionButton = {
            FloatingActionButton(
                onClick = { showCreateDialog = true },
                containerColor = MaterialTheme.colorScheme.primary,
                contentColor = MaterialTheme.colorScheme.onPrimary,
                modifier = Modifier.shadow(8.dp, shape = CircleShape)
            ) {
                Icon(Icons.Rounded.Add, "Create Instance", modifier = Modifier.size(28.dp))
            }
        }
    ) { padding ->
        Column(
            modifier = Modifier
                .fillMaxSize()
                .padding(padding)
        ) {
            // Search and Filter Bar
            InstanceFilterBar(
                searchQuery = searchQuery,
                onSearchChange = { searchQuery = it },
                selectedLoader = selectedLoaderFilter,
                onLoaderSelect = { selectedLoaderFilter = it },
                modifier = Modifier.padding(horizontal = 16.dp, vertical = 8.dp)
            )

            // Instances Content
            Box(
                modifier = Modifier
                    .fillMaxSize()
                    .weight(1f)
            ) {
                AnimatedContent(
                    targetState = selectedView to filteredInstances.isEmpty(),
                    transitionSpec = {
                        (fadeIn() + scaleIn(initialScale = 0.95f)) togetherWith
                                (fadeOut() + scaleOut(targetScale = 1.05f))
                    },
                    label = "instance_content"
                ) { (view, isEmpty) ->
                    when {
                        isEmpty -> EmptyInstancesState(
                            onCreateClick = { showCreateDialog = true },
                            hasFilters = searchQuery.isNotBlank() || selectedLoaderFilter != null
                        )

                        view == ViewMode.GRID -> InstanceGrid(
                            instances = filteredInstances,
                            onLaunch = onLaunchInstance,
                            onEdit = onEditInstance,
                            onDuplicate = onDuplicateInstance,
                            onDelete = { instanceToDelete = it },
                            onOpenFolder = onOpenFolder,
                            onToggleFavorite = onToggleFavorite,
                            modifier = Modifier.padding(horizontal = 16.dp)
                        )

                        else -> InstanceList(
                            instances = filteredInstances,
                            onLaunch = onLaunchInstance,
                            onEdit = onEditInstance,
                            onDuplicate = onDuplicateInstance,
                            onDelete = { instanceToDelete = it },
                            onOpenFolder = onOpenFolder,
                            onToggleFavorite = onToggleFavorite,
                            modifier = Modifier.padding(horizontal = 16.dp)
                        )
                    }
                }
            }
        }
    }

    // Dialogs
    if (showCreateDialog) {
        CreateInstanceDialog(
            onDismiss = { showCreateDialog = false },
            onCreate = { name, version, loader ->
                onCreateInstance()
                showCreateDialog = false
            }
        )
    }

    if (instanceToDelete != null) {
        DeleteInstanceDialog(
            instance = instanceToDelete!!,
            onDismiss = { instanceToDelete = null },
            onConfirm = {
                onDeleteInstance(instanceToDelete!!)
                instanceToDelete = null
            }
        )
    }
}

// View Mode Enum
private enum class ViewMode { GRID, LIST }

// Sample Data
private fun sampleInstances(): List<MinecraftInstance> = listOf(
    MinecraftInstance(
        name = "Survival World",
        mcVersion = "1.20.4",
        loaderType = ModLoaderType.FABRIC,
        loaderVersion = "0.15.6",
        icon = InstanceIcon.GRASS_BLOCK,
        isFavorite = true,
        lastPlayed = System.currentTimeMillis() - 3600000,
        totalPlayTime = 1240,
        gameDirectory = "/games/survival",
        mods = listOf(ModInfo("1", "Sodium", "0.5.8", true), ModInfo("2", "Iris", "1.6.17", true))
    ),
    MinecraftInstance(
        name = "Modded Adventure",
        mcVersion = "1.19.2",
        loaderType = ModLoaderType.FORGE,
        loaderVersion = "43.3.0",
        icon = InstanceIcon.DIAMOND,
        lastPlayed = System.currentTimeMillis() - 86400000,
        totalPlayTime = 890,
        gameDirectory = "/games/modded",
        mods = listOf(ModInfo("1", "Create", "0.5.1", true), ModInfo("2", "JEI", "11.6.0", true))
    ),
    MinecraftInstance(
        name = "Creative Building",
        mcVersion = "1.20.1",
        loaderType = ModLoaderType.VANILLA,
        icon = InstanceIcon.CHEST,
        isFavorite = true,
        totalPlayTime = 45,
        gameDirectory = "/games/creative"
    ),
    MinecraftInstance(
        name = "Hardcore Challenge",
        mcVersion = "1.20.4",
        loaderType = ModLoaderType.FABRIC,
        loaderVersion = "0.15.6",
        icon = InstanceIcon.SWORD,
        lastPlayed = System.currentTimeMillis() - 172800000,
        totalPlayTime = 320,
        gameDirectory = "/games/hardcore"
    ),
    MinecraftInstance(
        name = "Sky Factory",
        mcVersion = "1.16.5",
        loaderType = ModLoaderType.FORGE,
        loaderVersion = "36.2.39",
        icon = InstanceIcon.NETHER_STAR,
        totalPlayTime = 15,
        gameDirectory = "/games/skyfactory"
    )
)