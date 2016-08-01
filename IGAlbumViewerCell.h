
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGAlbumViewerCellDelegate;
@class IGProfilePictureImageView, NSString, UILabel, IGTapButton;

@interface IGAlbumViewerCell : UICollectionViewCell {

	char _storyHidden;
	id<IGAlbumViewerCellDelegate> _delegate;
	IGProfilePictureImageView* _profileImageView;
	NSString* _username;
	NSString* _userDetailText;
	UILabel* _usernameLabel;
	UILabel* _userDetailLabel;
	IGTapButton* _hideButton;
	IGTapButton* _unhideButton;

}

@property (nonatomic,readonly) UILabel * usernameLabel;                                   //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * userDetailLabel;                                 //@synthesize userDetailLabel=_userDetailLabel - In the implementation block
@property (nonatomic,readonly) IGTapButton * hideButton;                                  //@synthesize hideButton=_hideButton - In the implementation block
@property (nonatomic,readonly) IGTapButton * unhideButton;                                //@synthesize unhideButton=_unhideButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumViewerCellDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * userDetailText;                                     //@synthesize userDetailText=_userDetailText - In the implementation block
@property (assign,nonatomic) char storyHidden;                                            //@synthesize storyHidden=_storyHidden - In the implementation block
+(float)preferredHeight;
-(IGProfilePictureImageView *)profileImageView;
-(void)hideTapped;
-(void)unhideTapped;
-(UILabel *)usernameLabel;
-(UILabel *)userDetailLabel;
-(IGTapButton *)unhideButton;
-(IGTapButton *)hideButton;
-(void)setUserDetailText:(NSString *)arg1 ;
-(void)setStoryHidden:(char)arg1 ;
-(NSString *)userDetailText;
-(char)storyHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumViewerCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumViewerCellDelegate>)delegate;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

