/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:11 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBDialogsData : NSObject {

	NSString* _method;
	NSDictionary* _arguments;
	NSDictionary* _clientState;
	NSDictionary* _results;

}

@property (nonatomic,copy) NSString * method;                       //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSDictionary * arguments;                //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy) NSDictionary * clientState;              //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,copy) NSDictionary * results;                  //@synthesize results=_results - In the implementation block
-(id)initWithMethod:(id)arg1 arguments:(id)arg2 ;
-(void)setArguments:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(char)isValid;
-(NSString *)method;
-(NSDictionary *)results;
-(void)setResults:(NSDictionary *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(NSDictionary *)clientState;
-(void)setClientState:(NSDictionary *)arg1 ;
-(NSDictionary *)arguments;
@end

