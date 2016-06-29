

@class NSString;

@interface IGDirectInboxPendingRequestsCellViewModel : NSObject {

	int _count;
	NSString* _text;

}

@property (nonatomic,readonly) int count;                    //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
-(id)textFromPendingRequests:(id)arg1 ;
-(id)initWithPendingRequests:(id)arg1 ;
-(int)count;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)text;
@end

