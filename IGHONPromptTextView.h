
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGHONPromptTextView : UIView {

	int _totalItems;
	int _currentItem;
	UILabel* _promptLabel;

}

@property (nonatomic,readonly) UILabel * promptLabel;              //@synthesize promptLabel=_promptLabel - In the implementation block
@property (assign,nonatomic) int totalItems;                       //@synthesize totalItems=_totalItems - In the implementation block
@property (assign,nonatomic) int currentItem;                      //@synthesize currentItem=_currentItem - In the implementation block
-(void)setupPromptLabel;
-(int)totalItems;
-(void)setTotalItems:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCurrentItem:(int)arg1 ;
-(int)currentItem;
-(UILabel *)promptLabel;
@end

