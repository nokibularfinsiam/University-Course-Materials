import { Injectable } from '@nestjs/common';

@Injectable()
export class AdminService {
  getUsers(): object {
    //return 'Hello admin';
    return {message: "hellow Admin"};
  }

  getUsersById(id: string): object{
    return {message: "Your id is " + id};
  }

  getUsersByNameAndId(name: string, id:string): object{
    return {message: "Your name is " + name + "and your id is" +id};
  }

  addUser(myobj:object):object{
    return myobj;
  }

  updateUserById(name: string, id:string): object{
    return {message: "Your name is " + name + "and your id is" +id};
  }

}