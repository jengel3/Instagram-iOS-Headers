/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


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
