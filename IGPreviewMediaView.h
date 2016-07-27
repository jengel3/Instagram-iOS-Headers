
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface IGPreviewMediaView : UIView {

	NSArray* _thumbnailImageViews;
	NSArray* _items;
	NSArray* _mediaURLs;

}

@property (nonatomic,copy) NSArray * thumbnailImageViews;              //@synthesize thumbnailImageViews=_thumbnailImageViews - In the implementation block
@property (nonatomic,retain) NSArray * items;                          //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray * mediaURLs;                      //@synthesize mediaURLs=_mediaURLs - In the implementation block
+(CGSize)thumbnailSizeForConstrainedWidth:(float)arg1 ;
-(id)newThumbnailView;
-(void)setThumbnailImageViews:(NSArray *)arg1 ;
-(NSArray *)thumbnailImageViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)mediaURLs;
-(void)setMediaURLs:(NSArray *)arg1 ;
@end

