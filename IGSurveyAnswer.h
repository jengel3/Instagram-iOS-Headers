

@class NSString;

@interface IGSurveyAnswer : NSObject {

	NSString* _title;
	NSString* _color;
	NSString* _value;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * color;              //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
@end

