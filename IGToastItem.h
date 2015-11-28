
#import <UIKit/UIView.h>

@class UILabel;

@interface IGToastItem : UIView {

	UILabel* _label;
	int _count;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int count;                    //@synthesize count=_count - In the implementation block
-(id)imageForItemType:(int)arg1 ;
-(int)count;
-(id)initWithType:(int)arg1 ;
-(void)setCount:(int)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end

