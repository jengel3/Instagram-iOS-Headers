/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:13 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OAMutableURLRequest, NSURLResponse, NSData, NSString;

@interface OAServiceTicket : NSObject {

	OAMutableURLRequest* request;
	NSURLResponse* response;
	NSData* data;
	int responseCode;
	char didSucceed;

}

@property (readonly) OAMutableURLRequest * request; 
@property (readonly) NSURLResponse * response; 
@property (readonly) NSData * data; 
@property (readonly) int responseCode; 
@property (readonly) char didSucceed; 
@property (readonly) NSString * body; 
-(id)initWithRequest:(id)arg1 response:(id)arg2 data:(id)arg3 didSucceed:(char)arg4 responseCode:(int)arg5 ;
-(int)responseCode;
-(char)didSucceed;
-(void)dealloc;
-(OAMutableURLRequest *)request;
-(NSData *)data;
-(NSString *)body;
-(NSURLResponse *)response;
@end

