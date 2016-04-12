

@class NSString, NSURL;

@interface IGInsightsParagraphUnit : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSString* _urlText;
	NSURL* _url;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * urlText;               //@synthesize urlText=_urlText - In the implementation block
@property (nonatomic,retain) NSURL * url;                    //@synthesize url=_url - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setUrlText:(NSString *)arg1 ;
-(NSString *)urlText;
@end

