
#import <Instagram/IGFeedViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class IGUser, UIView, NSString;

@interface IGUsertagFeedViewController : IGFeedViewController <IGCoreTextLinkHandler> {

	int _photoCount;
	IGUser* _user;
	UIView* _headerView;

}

@property (nonatomic,retain) IGUser * user;                         //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) UIView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)handleLoadedContentDidChange;
-(void)handleWillLoadItemsFromResponse:(id)arg1 ;
-(void)updateNetworkSource;
-(void)onSettingsButtonTapped;
-(id)introPeriodHeaderViewWithExpirationDate:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)dealloc;
-(id)init;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end

