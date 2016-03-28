
#import <Instagram/IGViewController.h>

@class IGInsightsComponentListViewController;

@interface IGInsightsAudienceViewController : IGViewController {

	IGInsightsComponentListViewController* _componentListViewController;

}

@property (nonatomic,retain) IGInsightsComponentListViewController * componentListViewController;              //@synthesize componentListViewController=_componentListViewController - In the implementation block
-(IGInsightsComponentListViewController *)componentListViewController;
-(void)setComponentListViewController:(IGInsightsComponentListViewController *)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

