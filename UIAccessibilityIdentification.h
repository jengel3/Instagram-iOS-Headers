
@class NSString;


@protocol UIAccessibilityIdentification <NSObject>
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
@required
-(NSString *)accessibilityIdentifier;
-(void)setAccessibilityIdentifier:(id)arg1;

@end

