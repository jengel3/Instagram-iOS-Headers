
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@protocol IGEventViewerAttributionHeaderViewDelegate;
@class IGProfilePictureImageView, UIImageView, UILabel;

@interface IGEventViewerAttributionHeaderView : UICollectionReusableView {

	id<IGEventViewerAttributionHeaderViewDelegate> _delegate;
	IGProfilePictureImageView* _profileImageView;
	UIImageView* _verifiedBadgeImageView;
	UILabel* _usernameLabel;
	UILabel* _timestampLabel;

}

@property (assign,nonatomic,__weak) id<IGEventViewerAttributionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) IGProfilePictureImageView * profileImageView;                         //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * verifiedBadgeImageView;                                 //@synthesize verifiedBadgeImageView=_verifiedBadgeImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * usernameLabel;                                              //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * timestampLabel;                                             //@synthesize timestampLabel=_timestampLabel - In the implementation block
+(id)identifier;
+(id)kind;
-(UILabel *)timestampLabel;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)didReceiveTapGesture:(id)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(UIImageView *)verifiedBadgeImageView;
-(void)configureWithImageURL:(id)arg1 username:(id)arg2 timestamp:(id)arg3 isVerified:(char)arg4 ;
-(void)setProfileImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setVerifiedBadgeImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<IGEventViewerAttributionHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGEventViewerAttributionHeaderViewDelegate>)delegate;
-(id)textAttributes;
-(void)prepareForReuse;
-(void)setupSubviews;
@end

