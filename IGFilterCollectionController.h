
#import <Instagram/Instagram-Structs.h>
#import <Instagram/LXReorderableCollectionViewDataSource.h>
#import <Instagram/LXReorderableCollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGFilterTrayManagerViewControllerDelegate.h>

@protocol IGFilterCollectionControllerDelegate;
@class UICollectionView, NSMutableArray, NSDictionary, NSMutableSet, NSMutableDictionary, NSString;

@interface IGFilterCollectionController : NSObject <LXReorderableCollectionViewDataSource, LXReorderableCollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGFilterTrayManagerViewControllerDelegate> {

	char _scrollingToFilter;
	Class _selectedFilterClass;
	id<IGFilterCollectionControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	NSMutableArray* _orderedFilterClasses;
	NSMutableArray* _filterClassesInTray;
	int _pickerType;
	NSDictionary* _allFiltersById;
	NSMutableSet* _activeFilterSet;
	NSMutableDictionary* _filterThumbnailsById;
	NSMutableSet* _newFilterIds;

}

@property (nonatomic,retain) Class selectedFilterClass;                                             //@synthesize selectedFilterClass=_selectedFilterClass - In the implementation block
@property (assign,nonatomic,__weak) id<IGFilterCollectionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                     //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSMutableArray * orderedFilterClasses;                                 //@synthesize orderedFilterClasses=_orderedFilterClasses - In the implementation block
@property (nonatomic,copy) NSMutableArray * filterClassesInTray;                                    //@synthesize filterClassesInTray=_filterClassesInTray - In the implementation block
@property (assign,nonatomic) int pickerType;                                                        //@synthesize pickerType=_pickerType - In the implementation block
@property (assign,nonatomic) char scrollingToFilter;                                                //@synthesize scrollingToFilter=_scrollingToFilter - In the implementation block
@property (nonatomic,retain) NSDictionary * allFiltersById;                                         //@synthesize allFiltersById=_allFiltersById - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeFilterSet;                                        //@synthesize activeFilterSet=_activeFilterSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filterThumbnailsById;                            //@synthesize filterThumbnailsById=_filterThumbnailsById - In the implementation block
@property (nonatomic,retain) NSMutableSet * newFilterIds;                                           //@synthesize newFilterIds=_newFilterIds - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)useStaticFilterThumbnails;
+(id)sharedFilterClasses;
+(id)photoFilterClasses;
+(id)videoFilterClasses;
+(id)sharedFiltersHiddenByDefault;
+(id)filtersHiddenByDefault;
-(NSMutableArray *)orderedFilterClasses;
-(char)isVisibleFilterClass:(Class)arg1 ;
-(void)logFilterManagementState;
-(Class)selectedFilterClass;
-(id)filterThumbnailForFilterId:(int)arg1 ;
-(void)setFilterClass:(Class)arg1 isVisible:(char)arg2 ;
-(void)moveFilterClassFromIndex:(int)arg1 toIndex:(int)arg2 ;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 willMoveToIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canMoveToIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 canBeRemovedAtPoint:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 itemAtIndexPath:(id)arg2 wasRemovedAtPoint:(CGPoint)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willBeginDraggingItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 willEndDraggingItemAtIndexPath:(id)arg3 ;
-(void)generateFilterPreviewThumbnailsForImage:(id)arg1 ;
-(void)selectFilter:(Class)arg1 animated:(char)arg2 ;
-(NSMutableSet *)activeFilterSet;
-(void)readFilterClasses;
-(id)allFilterClasses;
-(NSDictionary *)allFiltersById;
-(id)filterStorageKey;
-(void)setActiveFilterSet:(NSMutableSet *)arg1 ;
-(void)setOrderedFilterClasses:(NSMutableArray *)arg1 ;
-(NSMutableSet *)newFilterIds;
-(void)writeNewFiltersToDefaults;
-(void)writeFiltersToDefaults;
-(id)filterManagementState;
-(NSMutableArray *)filterClassesInTray;
-(char)isNewFilterClass:(Class)arg1 ;
-(void)setNewFilterIsNoLongerNew:(Class)arg1 ;
-(void)setScrollingToFilter:(char)arg1 ;
-(void)setFilterThumbnailsById:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)filterThumbnailsById;
-(Class)filterClassForId:(int)arg1 ;
-(void)setSelectedFilterClass:(Class)arg1 ;
-(void)setFilterClassesInTray:(NSMutableArray *)arg1 ;
-(int)pickerType;
-(void)setPickerType:(int)arg1 ;
-(char)scrollingToFilter;
-(void)setAllFiltersById:(NSDictionary *)arg1 ;
-(void)setNewFilterIds:(NSMutableSet *)arg1 ;
-(void)setDelegate:(id<IGFilterCollectionControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<IGFilterCollectionControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithType:(int)arg1 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)resetSelection;
-(void)resetToDefaults;
@end

