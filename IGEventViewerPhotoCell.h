
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemPhotoCell.h>
#import <Instagram/IGEventViewerCellType.h>

@protocol IGEventViewerMediaCellDelegate;
@class IGBlurredImageView, UITapGestureRecognizer, NSString;

@interface IGEventViewerPhotoCell : IGFeedItemPhotoCell <IGEventViewerCellType> {

	id<IGEventViewerMediaCellDelegate> _tapDelegate;
	IGBlurredImageView* _blurredImageView;
	UITapGestureRecognizer* _singleTap;
	UITapGestureRecognizer* _doubleTap;

}

@property (assign,nonatomic,__weak) id<IGEventViewerMediaCellDelegate> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;                            //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * singleTap;                                 //@synthesize singleTap=_singleTap - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTap;                                 //@synthesize doubleTap=_doubleTap - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPost:(id)arg1 ;
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(IGBlurredImageView *)blurredImageView;
-(void)setShadowHidden:(char)arg1 ;
-(void)configurePhotoView;
-(void)configureSingleTap;
-(void)didReceiveSingleTap:(id)arg1 ;
-(void)setSingleTap:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)doubleTap;
-(void)setDoubleTap:(UITapGestureRecognizer *)arg1 ;
-(void)didReceiveDoubleTap:(id)arg1 ;
-(UITapGestureRecognizer *)singleTap;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTapDelegate:(id<IGEventViewerMediaCellDelegate>)arg1 ;
-(id<IGEventViewerMediaCellDelegate>)tapDelegate;
-(void)prepareForReuse;
-(void)setDoubleTapEnabled:(char)arg1 ;
@end

