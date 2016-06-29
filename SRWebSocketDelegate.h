

@protocol SRWebSocketDelegate <NSObject>
@optional
-(void)webSocketDidOpen:(id)arg1;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2;
-(void)webSocket:(id)arg1 didReceivePong:(id)arg2;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4;
-(void)webSocket:(id)arg1 didReceivePing:(id)arg2;

@required
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;

@end

