
#import <Instagram/IGSearchSectionController.h>

@class UIViewController, NSString;

@interface IGNearbyPlacesBannerSectionController : NSObject <IGSearchSectionController> {

	UIViewController* _viewController;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 cellForIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectIndexPath:(id)arg2 searchString:(id)arg3 ;
-(id)initWithTableView:(id)arg1 viewController:(id)arg2 ;
-(unsigned)numberOfRows;
-(UIViewController *)viewController;
@end

