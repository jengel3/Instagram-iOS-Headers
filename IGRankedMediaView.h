
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGRankedMediaViewDelegate;
@class NSArray, UILabel, UIView;

@interface IGRankedMediaView : UIView {

	char _rankedContentVisible;
	char _allMediaContentVisible;
	id<IGRankedMediaViewDelegate> _delegate;
	NSArray* _thumbnailImageViews;
	UILabel* _rankedLabel;
	UILabel* _allMediaLabel;
	UIView* _overlayView;
	NSArray* _mediaURLs;
	UILabel* _postCountLabel;

}

@property (assign,getter=isRankedContentVisible,nonatomic) char rankedContentVisible;                  //@synthesize rankedContentVisible=_rankedContentVisible - In the implementation block
@property (assign,getter=isAllMediaContentVisible,nonatomic) char allMediaContentVisible;              //@synthesize allMediaContentVisible=_allMediaContentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<IGRankedMediaViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * thumbnailImageViews;                                              //@synthesize thumbnailImageViews=_thumbnailImageViews - In the implementation block
@property (nonatomic,retain) UILabel * rankedLabel;                                                    //@synthesize rankedLabel=_rankedLabel - In the implementation block
@property (nonatomic,retain) UILabel * allMediaLabel;                                                  //@synthesize allMediaLabel=_allMediaLabel - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                     //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NSArray * mediaURLs;                                                      //@synthesize mediaURLs=_mediaURLs - In the implementation block
@property (nonatomic,retain) UILabel * postCountLabel;                                                 //@synthesize postCountLabel=_postCountLabel - In the implementation block
+(CGSize)thumbnailSizeForConstrainedWidth:(float)arg1 ;
-(void)setAllMediaCount:(unsigned)arg1 ;
-(void)setRankedContentVisible:(char)arg1 ;
-(void)setAllMediaContentVisible:(char)arg1 ;
-(void)setMediaURLs:(id)arg1 videoIconIndexes:(id)arg2 ;
-(NSArray *)thumbnailImageViews;
-(char)isRankedContentVisible;
-(UILabel *)rankedLabel;
-(char)isAllMediaContentVisible;
-(UILabel *)postCountLabel;
-(UILabel *)allMediaLabel;
-(id)newThumbnailView;
-(void)setThumbnailImageViews:(NSArray *)arg1 ;
-(void)tappedImageView:(id)arg1 ;
-(id)thumbnailViewAtPoint:(CGPoint)arg1 ;
-(void)setRankedLabel:(UILabel *)arg1 ;
-(void)setAllMediaLabel:(UILabel *)arg1 ;
-(void)setPostCountLabel:(UILabel *)arg1 ;
-(id)numberFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGRankedMediaViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGRankedMediaViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSArray *)mediaURLs;
-(void)setMediaURLs:(NSArray *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

