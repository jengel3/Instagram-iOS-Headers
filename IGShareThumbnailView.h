
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface IGShareThumbnailView : UIView {

	NSArray* _photoViews;
	float _thumbnailWidth;
	float _headerPadding;

}

@property (nonatomic,readonly) NSArray * photoViews;              //@synthesize photoViews=_photoViews - In the implementation block
@property (assign,nonatomic) float thumbnailWidth;                //@synthesize thumbnailWidth=_thumbnailWidth - In the implementation block
@property (assign,nonatomic) float headerPadding;                 //@synthesize headerPadding=_headerPadding - In the implementation block
-(NSArray *)photoViews;
-(CGRect)frameForViewAtColumn:(unsigned)arg1 atRow:(unsigned)arg2 ;
-(float)headerPadding;
-(void)setHeaderPadding:(float)arg1 ;
-(void)setThumbnailWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)thumbnailWidth;
@end

