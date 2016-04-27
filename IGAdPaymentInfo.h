

@class NSURL, NSString;

@interface IGAdPaymentInfo : NSObject {

	NSURL* _imageURL;
	NSString* _paymentTitle;
	NSString* _paymentSubtitle;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;                        //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentTitle;                 //@synthesize paymentTitle=_paymentTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentSubtitle;              //@synthesize paymentSubtitle=_paymentSubtitle - In the implementation block
-(id)initWithImageURL:(id)arg1 paymentTitle:(id)arg2 paymentSubtitle:(id)arg3 ;
-(NSString *)paymentTitle;
-(NSString *)paymentSubtitle;
-(NSURL *)imageURL;
@end

