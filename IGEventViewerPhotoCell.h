
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemPhotoCell.h>
#import <Instagram/IGEventViewerCellType.h>

@protocol IGEventViewerMediaCellDelegate;
@class IGBlurredImageView, NSString;

@interface IGEventViewerPhotoCell : IGFeedItemPhotoCell <IGEventViewerCellType> {

	id<IGEventViewerMediaCellDelegate> _tapDelegate;
	IGBlurredImageView* _blurredImageView;

}

@property (assign,nonatomic,__weak) id<IGEventViewerMediaCellDelegate> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;                            //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPost:(id)arg1 ;
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(IGBlurredImageView *)blurredImageView;
-(void)setShadowHidden:(char)arg1 ;
-(void)configurePhotoView;
-(void)didReceiveSingleTap:(id)arg1 ;
-(void)didReceiveDoubleTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTapDelegate:(id<IGEventViewerMediaCellDelegate>)arg1 ;
-(id<IGEventViewerMediaCellDelegate>)tapDelegate;
-(void)prepareForReuse;
@end

