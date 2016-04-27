
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGImageProgressView;

@interface IGAlbumPlayerViewPhotoView : UIView {

	IGImageProgressView* _photoView;

}

@property (nonatomic,readonly) IGImageProgressView * photoView;              //@synthesize photoView=_photoView - In the implementation block
-(void)configureWithPhoto:(id)arg1 ;
-(IGImageProgressView *)photoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

