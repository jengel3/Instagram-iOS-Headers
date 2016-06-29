
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView;

@interface IGProfileImageCell : UICollectionViewCell {

	IGProfilePictureImageView* _profileImageView;

}

@property (nonatomic,readonly) IGProfilePictureImageView * profileImageView;              //@synthesize profileImageView=_profileImageView - In the implementation block
+(id)reuseIdentifier;
-(IGProfilePictureImageView *)profileImageView;
-(id)initWithFrame:(CGRect)arg1 ;
@end

