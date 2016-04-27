
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGProfilePictureImageView, IGLabel;

@interface IGAlbumFullscreenHeaderView : UIView {

	IGProfilePictureImageView* _profilePic;
	IGLabel* _usernameLabel;
	IGLabel* _detailsLabel;

}

@property (nonatomic,readonly) IGProfilePictureImageView * profilePic;              //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,readonly) IGLabel * usernameLabel;                             //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) IGLabel * detailsLabel;                              //@synthesize detailsLabel=_detailsLabel - In the implementation block
-(void)configureWithFeedItem:(id)arg1 currentItem:(id)arg2 ;
-(IGProfilePictureImageView *)profilePic;
-(IGLabel *)usernameLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(IGLabel *)detailsLabel;
@end

