

@class IGDirectShareRecipient, NSString;

@interface IGDirectUploadableParameter : NSObject {

	IGDirectShareRecipient* _recipient;
	NSString* _text;

}

@property (nonatomic,readonly) IGDirectShareRecipient * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                            //@synthesize text=_text - In the implementation block
-(id)initWithRecipient:(id)arg1 text:(id)arg2 ;
-(IGDirectShareRecipient *)recipient;
-(id)description;
-(NSString *)text;
@end

