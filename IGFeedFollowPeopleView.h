
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGBannerView, UITableView, UIView;

@interface IGFeedFollowPeopleView : UIView {

	IGBannerView* _bannerView;
	UITableView* _accountListView;
	UIView* _bottomLineView;
	UIView* _accountListBottomLineView;
	UIEdgeInsets _accountListViewInsets;

}

@property (nonatomic,retain) IGBannerView * bannerView;                       //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UITableView * accountListView;                   //@synthesize accountListView=_accountListView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accountListViewInsets;              //@synthesize accountListViewInsets=_accountListViewInsets - In the implementation block
@property (nonatomic,retain) UIView * bottomLineView;                         //@synthesize bottomLineView=_bottomLineView - In the implementation block
@property (nonatomic,retain) UIView * accountListBottomLineView;              //@synthesize accountListBottomLineView=_accountListBottomLineView - In the implementation block
-(UITableView *)accountListView;
-(float)cellHeightForAccountListViewHeight:(float)arg1 ;
-(void)setAccountListViewInsets:(UIEdgeInsets)arg1 ;
-(void)setBottomLineView:(UIView *)arg1 ;
-(UIEdgeInsets)accountListViewInsets;
-(UIView *)bottomLineView;
-(void)setAccountListView:(UITableView *)arg1 ;
-(UIView *)accountListBottomLineView;
-(void)setAccountListBottomLineView:(UIView *)arg1 ;
-(IGBannerView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBannerView:(IGBannerView *)arg1 ;
@end

