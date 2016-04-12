
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGImageView;

@interface IGAlbumTabBarEntryCellImageView : UIView {

	IGImageView* _imageView;

}

@property (nonatomic,retain) IGImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithPhoto:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(IGImageView *)imageView;
-(void)setImageView:(IGImageView *)arg1 ;
@end

