
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class IGProfilePictureImageView, UILabel, IGImageView;

@interface IGExplorePeopleYouFollowView : UIControl {

	IGProfilePictureImageView* _profileImageView;
	UILabel* _usernameLabel;
	UILabel* _timestampLabel;
	IGImageView* _postImageView;

}

@property (assign,nonatomic,__weak) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * usernameLabel;                                   //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * timestampLabel;                                  //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (assign,nonatomic,__weak) IGImageView * postImageView;                               //@synthesize postImageView=_postImageView - In the implementation block
-(UILabel *)timestampLabel;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(IGImageView *)postImageView;
-(UILabel *)usernameLabel;
-(void)setPostImageView:(IGImageView *)arg1 ;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(void)setProfileImageView:(IGProfilePictureImageView *)arg1 ;
-(void)configureSubviewsLayout;
-(void)addAllSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
@end

