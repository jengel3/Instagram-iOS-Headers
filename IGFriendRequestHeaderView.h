
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGFriendRequestHeaderViewDelegate;
@class IGUser, IGSimpleButton, UILabel;

@interface IGFriendRequestHeaderView : UIView {

	char _incomingRequestPending;
	IGUser* _user;
	id<IGFriendRequestHeaderViewDelegate> _delegate;
	IGSimpleButton* _approveButton;
	IGSimpleButton* _ignoreButton;
	UILabel* _followLabel;

}

@property (nonatomic,readonly) IGSimpleButton * approveButton;                                   //@synthesize approveButton=_approveButton - In the implementation block
@property (nonatomic,readonly) IGSimpleButton * ignoreButton;                                    //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,readonly) UILabel * followLabel;                                            //@synthesize followLabel=_followLabel - In the implementation block
@property (nonatomic,retain) IGUser * user;                                                      //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<IGFriendRequestHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(IGSimpleButton *)approveButton;
-(void)setUpSubviews;
-(void)addSubviews;
-(void)setUpFollowLabel;
-(void)setUpApproveButton;
-(void)setUpIgnoreButton;
-(UILabel *)followLabel;
-(void)onApproveButtonTapped:(id)arg1 ;
-(void)onIgnoreButtonTapped:(id)arg1 ;
-(void)updateFollowStatus:(id)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(void)hide;
-(void)show;
-(void)setDelegate:(id<IGFriendRequestHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGFriendRequestHeaderViewDelegate>)delegate;
-(IGSimpleButton *)ignoreButton;
@end

