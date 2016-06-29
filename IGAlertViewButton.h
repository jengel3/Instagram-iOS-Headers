

@class NSString;

@interface IGAlertViewButton : NSObject {

	int _type;
	NSString* _text;

}

@property (assign,nonatomic) int type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * text;              //@synthesize text=_text - In the implementation block
+(id)buttonTypes;
-(id)initWithButtonType:(int)arg1 text:(id)arg2 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

