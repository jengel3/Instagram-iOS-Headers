
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListCollectionContext.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListItemType.h>

@class NSOrderedSet, NSArray, NSCountedSet, NSString;

@interface IGListStackedItemController : IGListItemController <IGListCollectionContext, IGListDisplayDelegate, IGListItemType> {

	NSOrderedSet* _itemControllers;
	NSArray* _itemControllersForItems;
	NSArray* _itemControllerOffsets;
	unsigned _flattenedNumberOfItems;
	NSCountedSet* _visibleItemControllers;

}

@property (nonatomic,readonly) NSOrderedSet * itemControllers;                     //@synthesize itemControllers=_itemControllers - In the implementation block
@property (nonatomic,copy) NSArray * itemControllersForItems;                      //@synthesize itemControllersForItems=_itemControllersForItems - In the implementation block
@property (nonatomic,copy) NSArray * itemControllerOffsets;                        //@synthesize itemControllerOffsets=_itemControllerOffsets - In the implementation block
@property (assign,nonatomic) unsigned flattenedNumberOfItems;                      //@synthesize flattenedNumberOfItems=_flattenedNumberOfItems - In the implementation block
@property (nonatomic,readonly) NSCountedSet * visibleItemControllers;              //@synthesize visibleItemControllers=_visibleItemControllers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize containerSize; 
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(unsigned)sectionForListItemController:(id)arg1 ;
-(NSOrderedSet *)itemControllers;
-(void)setItemControllerOffsets:(NSArray *)arg1 ;
-(void)setFlattenedNumberOfItems:(unsigned)arg1 ;
-(void)setItemControllersForItems:(NSArray *)arg1 ;
-(NSArray *)itemControllerOffsets;
-(NSArray *)itemControllersForItems;
-(unsigned)flattenedNumberOfItems;
-(unsigned)offsetForItemController:(id)arg1 ;
-(id)cellClasses;
-(id)itemControllerForItemIndex:(unsigned)arg1 ;
-(unsigned)localIndexForItemController:(id)arg1 index:(unsigned)arg2 ;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(unsigned)indexForCell:(id)arg1 listItemController:(id)arg2 ;
-(id)cellForItemAtIndex:(int)arg1 listItemController:(id)arg2 ;
-(id)visibleCellsForListItemController:(id)arg1 ;
-(void)deselectItemAtIndex:(int)arg1 listItemController:(id)arg2 animated:(char)arg3 ;
-(id)dequeReusableCellOfClass:(Class)arg1 forListItemController:(id)arg2 atIndex:(int)arg3 ;
-(id)dequeReusableSupplementaryViewOfKind:(id)arg1 forListItemController:(id)arg2 class:(Class)arg3 atIndex:(int)arg4 ;
-(id)itemIndexesForItemController:(id)arg1 indexes:(id)arg2 ;
-(void)reloadItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)insertItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)deleteItemsInListItemController:(id)arg1 atIndexes:(id)arg2 ;
-(void)reloadListItemController:(id)arg1 ;
-(void)performBatchAnimated:(char)arg1 updates:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(NSCountedSet *)visibleItemControllers;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(id)initWithItemControllers:(id)arg1 ;
-(void)reloadData;
-(void)setViewController:(id)arg1 ;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
-(CGSize)containerSize;
@end

