
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIDatePicker.h>

@interface RCTDatePicker : UIDatePicker {

	/*^block*/id _onChange;

}

@property (nonatomic,copy) id onChange;              //@synthesize onChange=_onChange - In the implementation block
-(id)onChange;
-(void)didChange;
-(void)setOnChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

