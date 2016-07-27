
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGInsightsInsightsDataOrderingSelectorViewDelegate;
@class NSArray, NSDictionary, NSMutableDictionary;

@interface IGInsightsInsightsDataOrderingSelectorView : UIView {

	NSArray* _buttonTitles;
	id<IGInsightsInsightsDataOrderingSelectorViewDelegate> _delegate;
	NSArray* _buttons;
	unsigned _activeIndex;
	NSDictionary* _buttonTitleToImageNameMapping;
	NSMutableDictionary* _buttonIndexToTintedImageMapping;

}

@property (nonatomic,copy,readonly) NSArray * buttons;                                                            //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) unsigned activeIndex;                                                                //@synthesize activeIndex=_activeIndex - In the implementation block
@property (nonatomic,copy) NSDictionary * buttonTitleToImageNameMapping;                                          //@synthesize buttonTitleToImageNameMapping=_buttonTitleToImageNameMapping - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * buttonIndexToTintedImageMapping;                                 //@synthesize buttonIndexToTintedImageMapping=_buttonIndexToTintedImageMapping - In the implementation block
@property (nonatomic,copy) NSArray * buttonTitles;                                                                //@synthesize buttonTitles=_buttonTitles - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsInsightsDataOrderingSelectorViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)buttonClick:(id)arg1 ;
-(void)initializeButtonTitleToImageNameMapping;
-(NSDictionary *)buttonTitleToImageNameMapping;
-(void)activateButtonAtIndex:(unsigned)arg1 ;
-(unsigned)activeIndex;
-(void)deactivateButtonAtIndex:(unsigned)arg1 ;
-(void)setActiveIndex:(unsigned)arg1 ;
-(NSMutableDictionary *)buttonIndexToTintedImageMapping;
-(void)setButtonTitleToImageNameMapping:(NSDictionary *)arg1 ;
-(void)setButtonIndexToTintedImageMapping:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<IGInsightsInsightsDataOrderingSelectorViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInsightsInsightsDataOrderingSelectorViewDelegate>)delegate;
-(NSArray *)buttonTitles;
-(void)setButtonTitles:(NSArray *)arg1 ;
-(NSArray *)buttons;
@end

