/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:03:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGMediaRequestDelegate <NSObject>
@optional
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3;
-(void)mediaRequest:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 forURL:(id)arg5;

@end

