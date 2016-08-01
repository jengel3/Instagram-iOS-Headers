
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGExploreCarouselsDataSource.h>
#import <Instagram/IGExploreCarouselsDelegate.h>

@protocol IGInsightsCarouselsViewDelegate;
@class IGExploreCarouselsView, NSString, NSArray;

@interface IGInsightsCarouselsView : UIView <IGExploreCarouselsDataSource, IGExploreCarouselsDelegate> {

	id<IGInsightsCarouselsViewDelegate> _delegate;
	IGExploreCarouselsView* _carouselsView;
	NSString* _header;
	NSString* _buttonText;
	NSArray* _mediaBundles;

}

@property (nonatomic,retain) IGExploreCarouselsView * carouselsView;                           //@synthesize carouselsView=_carouselsView - In the implementation block
@property (nonatomic,copy) NSString * header;                                                  //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                              //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundles;                                             //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsCarouselsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)numberOfCarouselsInCarouselsView:(id)arg1 ;
-(id)carouselsView:(id)arg1 titleForCarouselAtSection:(unsigned)arg2 ;
-(char)carouselsView:(id)arg1 shouldShowButtonForCarouselAtSection:(unsigned)arg2 ;
-(id)carouselsView:(id)arg1 actionTitleForCarouselAtSection:(unsigned)arg2 ;
-(void)carouselsView:(id)arg1 didTapButtonInCarouselSection:(unsigned)arg2 ;
-(unsigned)carouselsView:(id)arg1 numberOfItemsForCarouselAtSection:(unsigned)arg2 ;
-(void)carouselsView:(id)arg1 didDisplayCarouselItemAtIndexPath:(id)arg2 ;
-(id)carouselsView:(id)arg1 viewModelForCarouselItemAtIndexPath:(id)arg2 ;
-(void)carouselsView:(id)arg1 didSelectCarouselItemAtIndexPath:(id)arg2 ;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(NSArray *)mediaBundles;
-(void)updateMediaBundle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 header:(id)arg2 buttonText:(id)arg3 ;
-(IGExploreCarouselsView *)carouselsView;
-(id)feedItemAtIndex:(int)arg1 ;
-(void)setCarouselsView:(IGExploreCarouselsView *)arg1 ;
-(void)setDelegate:(id<IGInsightsCarouselsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsCarouselsViewDelegate>)delegate;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

