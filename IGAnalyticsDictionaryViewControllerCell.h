
#import <UIKit/UITableViewCell.h>

@class NSString;

@interface IGAnalyticsDictionaryViewControllerCell : UITableViewCell {

	NSString* _key;
	id _value;

}

@property (copy) NSString * key;              //@synthesize key=_key - In the implementation block
@property (copy) id value;                    //@synthesize value=_value - In the implementation block
-(id)init;
-(NSString *)key;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

