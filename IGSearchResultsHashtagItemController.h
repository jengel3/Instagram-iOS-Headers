
#import <Instagram/IGSearchResultsItemController.h>

@class NSString;

@interface IGSearchResultsHashtagItemController : NSObject <IGSearchResultsItemController>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canHandleItem:(id)arg1 ;
-(id)tableView:(id)arg1 cellForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 viewControllerForItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sectionController:(id)arg1 tableView:(id)arg2 didSelectItem:(id)arg3 atIndexPath:(id)arg4 ;
@end

