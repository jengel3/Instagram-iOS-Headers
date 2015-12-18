
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVideoCell.h>
#import <Instagram/IGEventViewerCellType.h>

@protocol IGEventViewerMediaCellDelegate;
@class UIActivityIndicatorView, IGBlurredImageView, NSString;

@interface IGEventViewerVideoCell : IGFeedItemVideoCell <IGEventViewerCellType> {

	id<IGEventViewerMediaCellDelegate> _tapDelegate;
	UIActivityIndicatorView* _spinner;
	IGBlurredImageView* _blurredImageView;

}

@property (assign,nonatomic,__weak) id<IGEventViewerMediaCellDelegate> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
@property (nonatomic,__weak,readonly) UIActivityIndicatorView * spinner;                         //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) IGBlurredImageView * blurredImageView;                            //@synthesize blurredImageView=_blurredImageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPost:(id)arg1 ;
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(IGBlurredImageView *)blurredImageView;
-(void)setShadowHidden:(char)arg1 ;
-(void)didReceiveSingleTap:(id)arg1 ;
-(void)didReceiveDoubleTap:(id)arg1 ;
-(void)configureVideoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTapDelegate:(id<IGEventViewerMediaCellDelegate>)arg1 ;
-(id<IGEventViewerMediaCellDelegate>)tapDelegate;
-(void)prepareForReuse;
-(UIActivityIndicatorView *)spinner;
@end

