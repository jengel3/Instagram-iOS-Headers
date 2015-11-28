
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface IGAddPeopleImageView : UIView {

	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
@end

