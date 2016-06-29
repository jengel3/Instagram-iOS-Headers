
#import <Instagram/IGSearchSectionController.h>

@class IGSearchResultsViewController, NSOrderedSet, NSArray, NSString;

@interface IGSearchResultsSectionController : NSObject <IGSearchSectionController> {

	IGSearchResultsViewController* _viewController;
	NSOrderedSet* _items;
	NSArray* _itemControllers;

}

@property (nonatomic,readonly) NSArray * itemControllers;                                          //@synthesize itemControllers=_itemControllers - In the implementation block
@property (nonatomic,__weak,readonly) IGSearchResultsViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * items;                                               //@synthesize items=_items - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)itemControllers;
-(id)itemControllerForItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 viewController:(id)arg2 ;
-(id)initWithArrayOfItems:(id)arg1 viewController:(id)arg2 ;
-(id)initWithItems:(id)arg1 viewController:(id)arg2 itemControllers:(id)arg3 ;
-(id)itemForIndexPath:(id)arg1 ;
-(id)tableView:(id)arg1 cellForIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectIndexPath:(id)arg2 searchString:(id)arg3 ;
-(void)pushViewController:(id)arg1 ;
-(id)init;
-(NSOrderedSet *)items;
-(unsigned)numberOfRows;
-(IGSearchResultsViewController *)viewController;
@end

