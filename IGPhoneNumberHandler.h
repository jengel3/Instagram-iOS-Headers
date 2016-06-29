

@class NSString;

@interface IGPhoneNumberHandler : NSObject {

	NSString* _number;

}

@property (nonatomic,copy,readonly) NSString * number;              //@synthesize number=_number - In the implementation block
-(char)callWithConfirmation:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)sendSms;
-(id)initWithNumber:(id)arg1 ;
-(NSString *)number;
@end

