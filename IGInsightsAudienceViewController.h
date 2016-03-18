
#import <Instagram/IGViewController.h>

@class IGInsightsComponentListViewController;

@interface IGInsightsAudienceViewController : IGViewController {

	IGInsightsComponentListViewController* _componentListViewController;

}

@property (nonatomic,retain) IGInsightsComponentListViewController * componentListViewController;              //@synthesize componentListViewController=_componentListViewController - In the implementation block
-(id)initWithQueryItems:(id)arg1 ;
-(IGInsightsComponentListViewController *)componentListViewController;
-(void)setComponentListViewController:(IGInsightsComponentListViewController *)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

