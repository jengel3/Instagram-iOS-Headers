/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OAMutableURLRequest, NSURLResponse, NSURLConnection, NSMutableData;

@interface OADataFetcher : NSObject {

	OAMutableURLRequest* request;
	NSURLResponse* response;
	NSURLConnection* connection;
	NSMutableData* responseData;
	id delegate;
	SEL didFinishSelector;
	SEL didFailSelector;

}
-(void)fetchDataWithRequest:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3 didFailSelector:(SEL)arg4 ;
-(void)fetchDataWithRequest:(id)arg1 didFinishBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
@end

