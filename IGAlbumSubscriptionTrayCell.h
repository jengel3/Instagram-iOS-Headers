
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, UILabel, UIView, IGReelSubscriptionTrayItemModel;

@interface IGAlbumSubscriptionTrayCell : UICollectionViewCell {

	IGProfilePictureImageView* _profileImageView;
	UILabel* _usernameLabel;
	UIView* _seenDot;
	IGReelSubscriptionTrayItemModel* _model;

}

@property (nonatomic,retain) UILabel * usernameLabel;                                     //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UIView * seenDot;                                            //@synthesize seenDot=_seenDot - In the implementation block
@property (nonatomic,retain) IGReelSubscriptionTrayItemModel * model;                     //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
+(float)sectionPadding;
+(float)width;
+(float)height;
-(UIView *)seenDot;
-(void)setSeenDot:(UIView *)arg1 ;
-(void)configureWithModel:(id)arg1 ;
-(IGProfilePictureImageView *)profileImageView;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(IGReelSubscriptionTrayItemModel *)model;
-(void)setModel:(IGReelSubscriptionTrayItemModel *)arg1 ;
-(void)preload;
@end

