

@class NSString, NSURL;

@interface IGInsightsParagraphUnit : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSString* _urlText;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlText;               //@synthesize urlText=_urlText - In the implementation block
@property (nonatomic,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)urlText;
@end

