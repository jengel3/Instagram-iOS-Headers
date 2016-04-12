
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, IGMediaThumbnailView;

@interface IGAlbumSubscriptionTrayCell : UICollectionViewCell {

	IGProfilePictureImageView* _profilePic;
	IGMediaThumbnailView* _thumbnailView;

}

@property (nonatomic,retain) IGProfilePictureImageView * profilePic;              //@synthesize profilePic=_profilePic - In the implementation block
@property (nonatomic,retain) IGMediaThumbnailView * thumbnailView;                //@synthesize thumbnailView=_thumbnailView - In the implementation block
+(float)sectionPadding;
+(float)height;
-(IGProfilePictureImageView *)profilePic;
-(void)setProfilePic:(IGProfilePictureImageView *)arg1 ;
-(void)configureWithModel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setThumbnailView:(IGMediaThumbnailView *)arg1 ;
-(IGMediaThumbnailView *)thumbnailView;
@end

