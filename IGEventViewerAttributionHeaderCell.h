
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGEventViewerAttributionHeaderCellDelegate;
@class IGProfilePictureImageView, UIImageView, UILabel, UIButton;

@interface IGEventViewerAttributionHeaderCell : UICollectionViewCell {

	id<IGEventViewerAttributionHeaderCellDelegate> _delegate;
	IGProfilePictureImageView* _profileImageView;
	UIImageView* _verifiedBadgeImageView;
	UILabel* _usernameLabel;
	UIButton* _moreButton;

}

@property (assign,nonatomic,__weak) IGProfilePictureImageView * profileImageView;                         //@synthesize profileImageView=_profileImageView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * verifiedBadgeImageView;                                 //@synthesize verifiedBadgeImageView=_verifiedBadgeImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * usernameLabel;                                              //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * moreButton;                                                //@synthesize moreButton=_moreButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerAttributionHeaderCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)cellIdentifier;
-(IGProfilePictureImageView *)profileImageView;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)configureView;
-(void)didTapMoreButton:(id)arg1 ;
-(void)layoutMoreButton;
-(void)setProfileImageView:(IGProfilePictureImageView *)arg1 ;
-(void)setMoreButtonHidden:(char)arg1 ;
-(void)didReceiveTapGesture:(id)arg1 ;
-(void)configureWithImageURL:(id)arg1 username:(id)arg2 isVerified:(char)arg3 ;
-(UIImageView *)verifiedBadgeImageView;
-(void)setVerifiedBadgeImageView:(UIImageView *)arg1 ;
-(UIButton *)moreButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<IGEventViewerAttributionHeaderCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGEventViewerAttributionHeaderCellDelegate>)delegate;
-(id)textAttributes;
-(void)prepareForReuse;
-(void)setupSubviews;
-(void)setMoreButton:(UIButton *)arg1 ;
@end

