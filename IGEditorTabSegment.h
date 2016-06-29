
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, NSString;

@interface IGEditorTabSegment : UIControl {

	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(void)updateLabelAttributes;
-(id)viewForNux;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)label;
@end

