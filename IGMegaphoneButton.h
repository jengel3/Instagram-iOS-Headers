

@class NSString, NSURL;

@interface IGMegaphoneButton : NSObject {

	NSString* _text;
	int _style;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int style;                  //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSURL * url;                  //@synthesize url=_url - In the implementation block
+(id)buttonForDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
@end

