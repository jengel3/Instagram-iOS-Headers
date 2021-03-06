
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageViewDelegate.h>

@class UIImageView, IGImageView, UIView, UIButton, UIActivityIndicatorView, NSString, UILabel;

@interface IGClusterTileView : UIView <IGImageViewDelegate> {

	UIImageView* _border;
	IGImageView* _imageView;
	IGImageView* _fullResolutionImageLoaderView;
	UIView* _imageHighlight;
	UIButton* _button;
	UIActivityIndicatorView* _spinner;
	NSString* _thumbnailUrl;
	NSString* _fullResolutionUrl;
	char _thumbnailHasLoaded;
	char _fullResolutionHasLoaded;
	char _fullResolutionIsShowing;
	char _showFullResolutionWhenDownloaded;
	char _isRemoved;
	UILabel* _counterLabel;
	UIImageView* _counterBubble;
	id _item;
	CGPoint _previousCenter;

}

@property (nonatomic,retain) UILabel * counterLabel;                   //@synthesize counterLabel=_counterLabel - In the implementation block
@property (nonatomic,retain) UIImageView * counterBubble;              //@synthesize counterBubble=_counterBubble - In the implementation block
@property (nonatomic,retain) id item;                                  //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) CGPoint previousCenter;                   //@synthesize previousCenter=_previousCenter - In the implementation block
@property (assign,nonatomic) char isRemoved;                           //@synthesize isRemoved=_isRemoved - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showFullResolutionImage;
-(void)loadThumbnailUrl:(id)arg1 fullResolutionUrl:(id)arg2 showFullResolutionWhenDownloaded:(char)arg3 ;
-(void)setPreviousCenter:(CGPoint)arg1 ;
-(CGPoint)previousCenter;
-(UILabel *)counterLabel;
-(UIImageView *)counterBubble;
-(void)cancelImageLoad:(char)arg1 ;
-(void)flashHighlight:(char)arg1 ;
-(void)loadThumbnailUrl:(id)arg1 ;
-(void)setIsRemoved:(char)arg1 ;
-(void)setCounter:(int)arg1 inEditMode:(char)arg2 ;
-(void)loadFullResolution;
-(id)imageHighlight;
-(void)hideHighlightAfterAnimation;
-(void)flashHighlightWithDuration:(float)arg1 ;
-(void)setCounterLabel:(UILabel *)arg1 ;
-(void)setCounterBubble:(UIImageView *)arg1 ;
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2 ;
-(void)showSpinner;
-(id)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)item;
-(void)setSize:(CGSize)arg1 ;
-(void)setItem:(id)arg1 ;
-(void)hideSpinner;
-(char)isRemoved;
-(void)hideHighlight;
-(void)showHighlight;
@end

