
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGTabBarButtonSupplementaryViewProtocol.h>

@class IGProfilePictureImageView, NSString;

@interface IGProfilePictureTabBarSupplementaryView : UIView <IGTabBarButtonSupplementaryViewProtocol> {

	IGProfilePictureImageView* _profilePicImageView;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePicImageView;              //@synthesize profilePicImageView=_profilePicImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGProfilePictureImageView *)profilePicImageView;
-(void)setProfilePicImageView:(IGProfilePictureImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 profilePictureImageView:(id)arg2 ;
-(void)tabBarButtonUpdatedWithIsSelected:(char)arg1 ;
-(void)layoutSubviews;
@end

